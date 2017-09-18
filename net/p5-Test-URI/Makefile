# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD: head/net/p5-Test-URI/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Test-URI
PORTVERSION=	1.081
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Check Uniform Resource Identifiers

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-URI>=0:net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
