# $FreeBSD: head/misc/soapysdr/Makefile 488341 2018-12-25 20:25:39Z tcberner $

PORTNAME=	SoapySDR
DISTVERSIONPREFIX=	soapy-sdr-
DISTVERSION=	0.7.0
PORTREVISION=	1
CATEGORIES=	misc hamradio

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Vendor and platform neutral SDR support library

LICENSE=	BSL
LICENSE_FILE=	${WRKSRC}/LICENSE_1_0.txt

USES=		cmake compiler:c++11-lang
USE_GITHUB=	yes
GH_ACCOUNT=	pothosware
USE_LDCONFIG=	yes

LDFLAGS+=	-pthread

.include <bsd.port.mk>
