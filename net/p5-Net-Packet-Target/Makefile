# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/net/p5-Net-Packet-Target/Makefile 471663 2018-06-04 18:10:54Z sunpoet $

PORTNAME=	Net-Packet-Target
PORTVERSION=	1.01
PORTREVISION=	1
CATEGORIES=	net perl5 devel
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Target object for all Net-Packet related stuff

LICENSE=	ART10
LICENSE_FILE=	${WRKSRC}/LICENSE.Artistic

BUILD_DEPENDS=	p5-Class-Gomor>=1.00:devel/p5-Class-Gomor \
		p5-Net-Packet>=3.00:net/p5-Net-Packet
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
