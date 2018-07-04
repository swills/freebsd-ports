# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/biology/iolib/Makefile 473692 2018-07-02 00:47:14Z linimon $

PORTNAME=	io_lib
DISTVERSIONPREFIX=	${PORTNAME}-
DISTVERSION=	1-14-9
CATEGORIES=	biology

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	General purpose trace file (and Experiment File) reading interface

LICENSE=	BSD3CLAUSE

BROKEN_mips=		fails to compile: bgzip.c: error: invalid operands to binary &
BROKEN_mips64=		fails to compile: bgzip.c: error: invalid operands to binary &
BROKEN_powerpc64=	fails to compile: bgzip.c: error: invalid operands to binary &

LIB_DEPENDS=	libcurl.so:ftp/curl

USE_GITHUB=	yes
GH_ACCOUNT=	jkbonfield

USES=		autoreconf gmake libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
