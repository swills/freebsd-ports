# Created by: Alexander Botero-Lowry <alexbl@FreeBSD.org>
# $FreeBSD: head/audio/p5-xmms2/Makefile 470573 2018-05-21 20:00:48Z madpilot $

PORTREVISION=	3
CATEGORIES=	audio perl5
PKGNAMEPREFIX=	p5-

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Perl Bindings for XMMS2

LIB_DEPENDS+=	libxmmsclient.so:audio/xmms2

MASTERDIR=	${.CURDIR}/../xmms2

USES=		perl5 ssl

BROKEN_SSL=	openssl-devel

PLIST=		${.CURDIR}/pkg-plist

XMMS2_SLAVE=	perl

.include "${MASTERDIR}/Makefile"
