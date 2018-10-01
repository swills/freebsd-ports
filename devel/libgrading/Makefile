# $FreeBSD: head/devel/libgrading/Makefile 480642 2018-09-25 07:29:25Z linimon $

PORTNAME=	libgrading
PORTVERSION=	0.1.2
PORTREVISION=	3
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	jonathan@FreeBSD.org
COMMENT=	Simple library for grading C- and C++-language assignments

LICENSE=	APACHE20

LIB_DEPENDS=	libdistance.so:devel/libdistance

USE_GITHUB=	yes
GH_ACCOUNT=	trombonehero

USES=		cmake compiler:c++11-lib
USE_LDCONFIG=	yes

PLIST_FILES=	include/libgrading.h \
		lib/libgrading.so

.include <bsd.port.mk>
