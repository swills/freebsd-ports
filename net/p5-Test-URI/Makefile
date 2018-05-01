# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD: head/net/p5-Test-URI/Makefile 468445 2018-04-27 15:55:39Z sunpoet $

PORTNAME=	Test-URI
PORTVERSION=	1.082
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Check Uniform Resource Identifiers

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-URI>=0:net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
