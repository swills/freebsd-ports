# $FreeBSD: head/devel/easyloggingpp/Makefile 462856 2018-02-24 17:49:38Z yuri $

PORTNAME=	easyloggingpp
DISTVERSIONPREFIX=	v
DISTVERSION=	9.96.1
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C++ logging library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake:outsource
USE_GITHUB=	yes
GH_ACCOUNT=	muflihun
USE_LDCONFIG=	yes
CMAKE_ON=	build_shared_lib  # patched in, requested such option in https://github.com/muflihun/easyloggingpp/issues/603

PLIST_FILES=	include/easylogging++.h \
		include/easylogging++.cc \
		lib/libeasyloggingpp.so \
		libdata/pkgconfig/easyloggingpp.pc

.include <bsd.port.mk>
