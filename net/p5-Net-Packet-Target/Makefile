# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/net/p5-Net-Packet-Target/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	Net-Packet-Target
PORTVERSION=	1.01
PORTREVISION=	1
CATEGORIES=	net perl5 devel
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Target object for all Net-Packet related stuff

LICENSE=	ART10

BUILD_DEPENDS=	p5-Class-Gomor>=1.00:devel/p5-Class-Gomor \
		p5-Net-Packet>=3.00:net/p5-Net-Packet
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
