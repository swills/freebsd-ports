# Created by: joerg
# $FreeBSD: head/devel/bcc/Makefile 438102 2017-04-09 12:57:35Z joerg $

PORTNAME=	bcc
PORTVERSION=	1995.03.12
PORTREVISION=	2
CATEGORIES=	devel lang
MASTER_SITES=	LOCAL/joerg
DISTNAME=	${PORTNAME}

MAINTAINER=	joerg@FreeBSD.org
COMMENT=	Bruce's C compiler (with as and ld); can do 16-bit code

LICENSE=	GPLv2

USES=		uidfix

CONFLICTS=	bin86-[0-9]* dev86-[0-9]*

BROKEN_aarch64=		Fails to link: error adding symbols: File in wrong format

.include <bsd.port.mk>
