# Created by: Zach Thompson <hideo@lastamericanempire.com>
# $FreeBSD: head/mail/bogofilter-tc/Makefile 444988 2017-07-03 20:38:11Z tcberner $

PORTNAME=	bogofilter
PORTREVISION=	2
CATEGORIES=	mail
PKGNAMESUFFIX=	-tc

MAINTAINER=	mandree@FreeBSD.org
# Blanket approval for changes by Zach Thompson (address above)

LIB_DEPENDS=	libtokyocabinet.so:databases/tokyocabinet

CONFLICTS_INSTALL=	bogofilter-[0-9]* [a-z][a-z]-bogofilter-[1-9]* bogofilter-sqlite-[0-9]* bogofilter-qdbm-[0-9]*

CONFIGURE_ARGS=	--with-database=tokyocabinet
BF_CPPFLAGS=	-I${LOCALBASE}/include
BF_LIBS=
DESCR=		${PKGDIR}/pkg-descr

MASTERDIR=	${.CURDIR}/../bogofilter

.include "${MASTERDIR}/Makefile"
