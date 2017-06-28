# Created by: Pankov Pavel <pankov_p@mail.ru>
# $FreeBSD: head/net-p2p/microdc2/Makefile 444463 2017-06-27 13:46:53Z sunpoet $

PORTNAME=	microdc2
PORTVERSION=	0.15.6
PORTREVISION=	7
CATEGORIES=	net-p2p
MASTER_SITES=	http://corsair626.no-ip.org/microdc/

MAINTAINER=	pankov_p@mail.ru
COMMENT=	Command-line based Direct Connect client

LICENSE=	GPLv2

CONFLICTS=	tthsum-[0-9]*

USES=		iconv readline
GNU_CONFIGURE=	yes
USE_GNOME=	libxml2

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=	gettext
NLS_CONFIGURE_OFF=	--disable-nls

.include <bsd.port.mk>
