# Created by: arved
# $FreeBSD: head/devel/remake/Makefile 484628 2018-11-10 18:12:57Z bapt $

PORTNAME=	remake
PORTVERSION=	1.4
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	SF/bashdb/remake/4.2+dbg-${PORTVERSION}/
DISTNAME=	remake-4.2.1+dbg-${PORTVERSION}

MAINTAINER=	arved@FreeBSD.org
COMMENT=	Fork of gmake with debugger

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
USES=		readline
INFO=		remake
CONFIGURE_ARGS=	--without-guile

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=	gettext iconv
NLS_CONFIGURE_ON=	${ICONV_CONFIGURE_ARG} \
			--with-libintl-prefix=${LOCALBASE}
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
