# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: head/audio/ruby-xmms2/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTREVISION=	4
CATEGORIES=	audio ruby
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby Bindings for XMMS2

LIB_DEPENDS+=	libxmmsclient.so:audio/xmms2

MASTERDIR=	${.CURDIR}/../xmms2

CONFIGURE_TARGET=	configure
USE_RUBY=	yes
USE_GNOME=	glib20

BROKEN_RUBY22=	yes
BROKEN_RUBY23=	yes

PLIST=		${.CURDIR}/pkg-plist

XMMS2_SLAVE=	ruby

.include "${MASTERDIR}/Makefile"
