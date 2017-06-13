# Created by: Jui-Nan Lin <jnlin@freebsd.cs.nctu.edu.tw>
# $FreeBSD: head/databases/libhsclient/Makefile 409912 2016-03-02 05:41:03Z lwhsu $

PORTNAME=	libhsclient
DISTVERSION=	1.0.6-20110614
PORTREVISION=	1
CATEGORIES=	databases
MASTER_SITES=	http://www.cs.nctu.edu.tw/~jnlin/distfiles/
DISTNAME=	HandlerSocket-Plugin-for-MySQL-${DISTVERSION}

MAINTAINER=	jnlin@freebsd.cs.nctu.edu.tw
COMMENT=	Client Library of HandlerSocket Plugin

WRKSRC=		${WRKDIR}/HandlerSocket-Plugin-for-MySQL

USES=		libtool
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-handlersocket-server=no

.include <bsd.port.mk>
