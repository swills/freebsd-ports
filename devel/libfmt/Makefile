# Created by: Viacheslav Mikerov <SlavaMikerov@gmail.com>
# $FreeBSD: head/devel/libfmt/Makefile 437439 2017-04-01 15:23:30Z gerald $

PORTNAME=	libfmt
PORTVERSION=	3.0.1
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	SlavaMikerov@gmail.com
COMMENT=	Fmt is an open-source formatting library for C++

LICENSE=	BSD2CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	fmtlib
GH_PROJECT=	fmt

USES=		cmake:outsource compiler:c++11-lib
CMAKE_ARGS=	-DFMT_DOC=OFF
OPTIONS_DEFINE=	TEST
TEST_CMAKE_OFF=	-DFMT_TEST=OFF

.include <bsd.port.mk>
