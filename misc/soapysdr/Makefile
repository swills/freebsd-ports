# $FreeBSD: head/misc/soapysdr/Makefile 483002 2018-10-26 03:54:35Z yuri $

PORTNAME=	SoapySDR
DISTVERSIONPREFIX=	soapy-sdr-
DISTVERSION=	0.7.0
CATEGORIES=	misc hamradio

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Vendor and platform neutral SDR support library

LICENSE=	BSL
LICENSE_FILE=	${WRKSRC}/LICENSE_1_0.txt

USES=		cmake:outsource compiler:c++11-lang
USE_GITHUB=	yes
GH_ACCOUNT=	pothosware
USE_LDCONFIG=	yes

LDFLAGS+=	-pthread

.include <bsd.port.mk>
