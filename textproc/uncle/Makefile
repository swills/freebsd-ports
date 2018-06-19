# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: head/textproc/uncle/Makefile 472026 2018-06-08 23:53:03Z gblach $

PORTNAME=	uncle
PORTVERSION=	0.2
CATEGORIES=	textproc

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Convert UCL config file to desired format

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libucl.so:textproc/libucl

BROKEN_powerpc64=	fails to compile: uncle.c: 'for' loop initial declaration used outside C99 mode

USE_GITHUB=	yes
GH_ACCOUNT=	MagikBSD

PLIST_FILES=	bin/uncle

.include <bsd.port.mk>
