# Created by: Leo Vandewoestijne <freebsd@dns-lab.com>
# $FreeBSD: head/dns/packetq/Makefile 456077 2017-12-12 02:30:49Z jbeich $

PORTNAME=	packetq
PORTVERSION=	1.4.0
DISTVERSIONPREFIX=	v
CATEGORIES=	dns

MAINTAINER=	freebsd@dns-lab.com
COMMENT=	Basic SQL-frontend to PCAP-files

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

GH_ACCOUNT=	DNS-OARC
GH_PROJECT=	PacketQ
USE_GITHUB=	yes

USES=		autoreconf compiler:c++11-lib
GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	DOCS

PLIST_FILES=	bin/packetq
PORTDOCS=	CHANGES COPYING FAQ.md FIELDS.md FUNCTIONS.md README.md

.include <bsd.port.mk>
