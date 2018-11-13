# $FreeBSD: head/archivers/gcpio/Makefile 484628 2018-11-10 18:12:57Z bapt $

PORTNAME=	cpio
PORTVERSION=	2.12
PORTREVISION=	1
CATEGORIES=	archivers
MASTER_SITES=	GNU
PKGNAMEPREFIX=	g

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	GNU cpio copies files to and from archives

LICENSE=	GPLv3

USES=		cpe tar:bzip2

CPE_VENDOR=	gnu

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--program-prefix=g \
		--with-rmt=/etc/rmt
TEST_TARGET=	check

INFO=		cpio

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=	gettext
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
