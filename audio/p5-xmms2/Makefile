# Created by: Alexander Botero-Lowry <alexbl@FreeBSD.org>
# $FreeBSD: head/audio/p5-xmms2/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTREVISION=	2
CATEGORIES=	audio perl5
PKGNAMEPREFIX=	p5-

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Perl Bindings for XMMS2

LIB_DEPENDS+=	libxmmsclient.so:audio/xmms2

MASTERDIR=	${.CURDIR}/../xmms2

USES=		perl5

PLIST=		${.CURDIR}/pkg-plist

XMMS2_SLAVE=	perl

.include "${MASTERDIR}/Makefile"
