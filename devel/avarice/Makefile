# Created by: Brian Dean <bsd@FreeBSD.org>
# $FreeBSD: head/devel/avarice/Makefile 474207 2018-07-08 22:34:53Z leres $

PORTNAME=	avarice
PORTVERSION=	2.13
PORTREVISION=	3
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	joerg@FreeBSD.org
COMMENT=	Atmel AVR JTAG programmer and debugging interface for avr-gdb

LICENSE=	GPLv2

USES=		perl5 tar:bzip2

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_path_pathperl=${PERL}

.include <bsd.port.mk>
