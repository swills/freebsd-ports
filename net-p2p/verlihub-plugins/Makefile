# Created by: Mikle Davidkin <skylord@vt.net.ru>
# $FreeBSD: head/net-p2p/verlihub-plugins/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	verlihub
PORTVERSION=	1.0
PORTREVISION=	5
CATEGORIES=	net-p2p
PKGNAMESUFFIX=	-plugins

MAINTAINER=	skylord@vt.net.ru
COMMENT=	Meta-port for VerliHub plugins

RUN_DEPENDS=	\
		${LOCALBASE}/lib/libchatroom_pi.so:net-p2p/verlihub-plugins-chatroom \
		${LOCALBASE}/lib/libfloodprot_pi.so:net-p2p/verlihub-plugins-floodprotect \
		${LOCALBASE}/lib/libforbid_pi.so:net-p2p/verlihub-plugins-forbid \
		${LOCALBASE}/lib/libiplog_pi.so:net-p2p/verlihub-plugins-iplog \
		${LOCALBASE}/lib/libisp_pi.so:net-p2p/verlihub-plugins-isp \
		${LOCALBASE}/lib/liblua_pi.so:net-p2p/verlihub-plugins-luascript \
		${LOCALBASE}/lib/libmessanger_pi.so:net-p2p/verlihub-plugins-messanger \
		${LOCALBASE}/lib/libstats_pi.so:net-p2p/verlihub-plugins-stats

USES=		metaport

.include <bsd.port.mk>
