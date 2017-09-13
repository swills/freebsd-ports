# $FreeBSD: head/devel/libgrading/Makefile 449591 2017-09-10 20:55:38Z gerald $

PORTNAME=	libgrading
PORTVERSION=	0.1.2
PORTREVISION=	2
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	jonathan@FreeBSD.org
COMMENT=	Simple library for grading C- and C++-language assignments

LICENSE=	APACHE20

LIB_DEPENDS=	libdistance.so:devel/libdistance

BROKEN_powerpc64=	fails to compile: Arguments.cpp: 'atol' is not a member of 'std'

USE_GITHUB=	yes
GH_ACCOUNT=	trombonehero

USES=		cmake compiler:c++11-lib
USE_LDCONFIG=	yes

PLIST_FILES=	include/libgrading.h \
		lib/libgrading.so

.include <bsd.port.mk>
