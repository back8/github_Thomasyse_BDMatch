#pragma once
#include "node.h"
#include <msclr\marshal_cppstd.h>  
#include <string>
#include <complex>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
extern "C" {
#include "libavcodec\avcodec.h"
#include "libavformat\avformat.h"
#include <libavutil/imgutils.h>
#include <libavutil/samplefmt.h>
#include <libavutil/timestamp.h>
#include <libavutil/frame.h>
#include <libavutil/mem.h>
#include "libswscale\swscale.h"
#include <libavutil/channel_layout.h>
#include "libavutil/md5.h"
#include "libavutil/opt.h"

#include "libavfilter/avfilter.h"
#include "libavfilter/buffersink.h"
#include "libavfilter/buffersrc.h"

#include <libswresample/swresample.h>
#include <fftw3.h>
}


namespace BDMatch{
	using namespace System;
	using namespace System;
	using namespace System::Collections::Concurrent;
	using namespace System::Collections::Generic;
	using namespace System::Threading::Tasks;
	using namespace System::Data;
	using namespace msclr::interop;
	using namespace Node;

	public delegate void ProgressCallback();
	public delegate void ProgMaxCallback(int max);

	ref class Decode
	{
	public:
		Decode(String^ filename0, int FFTnum0, bool outputpcm0, int mindb0, int resamprate0, List<Task^>^ tasks0,
			ProgressCallback^ progback0, ProgMaxCallback^ progmax0);
		void decodeaudio();
		String^ getfeedback();
		int getreturn();
		int getfftsampnum();
		int getmilisecnum();
		int getchannels();
		int getsamprate();
		array<node^, 2>^ getfftdata();
		ProgressCallback^ progback = nullptr;
		ProgMaxCallback^ progmax = nullptr;
	private:
		String^ filename;
		String^ feedback;
		array<node^, 2>^ fftdata;
		List<Task^>^ tasks;
		int FFTnum;
		int out_bitdepth = 0;
		int audiostream = 0;
		int milisecnum = 0;
		int fftsampnum = 0;
		int efftnum = 0;
		int samplerate = 0;
		int resamprate = 0;
		int mindb = 0;
		int channels = 0;
		int returnval = 0;
		bool outputpcm = false;
		double getshiftf(uint8_t * temp, int sampletype, int start);
		void subprogback();
	};

	ref class FFTC
	{
	public:
		FFTC(noded ^ seq0, node^ fftseq0, fftw_plan p0, double* in0, fftw_complex* out0, int mindb0, ProgressCallback^ progback0);
		void FFT();
	private:
		noded ^ seq;
		int FFTnum;
		int mindb;
		ProgressCallback^ progback;
		node^ fftseq;
		fftw_plan p;
		double *in = nullptr;
		fftw_complex *out = nullptr;
		int FD8(noded ^ inseq, node ^ outseq);
	};
}

