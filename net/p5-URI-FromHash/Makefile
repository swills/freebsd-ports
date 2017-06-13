# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/net/p5-URI-FromHash/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	URI-FromHash
DISTVERSION=	0.05
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Create URI from hash of components

LICENSE=	ART20

BUILD_DEPENDS=	p5-Params-Validate>=0:devel/p5-Params-Validate \
		p5-URI>=1.68:net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
