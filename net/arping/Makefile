# Created by: Roman Shterenzon <roman@xpert.com>
# $FreeBSD: head/net/arping/Makefile 465753 2018-03-27 21:05:47Z yuri $

PORTNAME=	arping
DISTVERSION=	2.19
CATEGORIES=	net
MASTER_SITES=	http://www.habets.pp.se/synscan/files/

MAINTAINER=	gavin@FreeBSD.org
COMMENT=	ARP level "ping" utility

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libnet.so:net/libnet

USES=		localbase
GNU_CONFIGURE=	yes

PLIST_FILES=	sbin/arping man/man8/arping.8.gz

.include <bsd.port.mk>
