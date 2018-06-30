# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/devel/p5-CPANPLUS-Dist-Build/Makefile 473263 2018-06-24 20:20:28Z sunpoet $

PORTNAME=	CPANPLUS-Dist-Build
PORTVERSION=	0.90
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	CPANPLUS plug-in to use Module-Build

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-CPANPLUS>=0.84:devel/p5-CPANPLUS \
		p5-Module-Build>=0.32:devel/p5-Module-Build
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
