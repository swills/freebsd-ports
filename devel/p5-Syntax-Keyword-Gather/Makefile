# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/p5-Syntax-Keyword-Gather/Makefile 462102 2018-02-17 11:57:33Z sunpoet $

PORTNAME=	Syntax-Keyword-Gather
PORTVERSION=	1.003002
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Implements the Perl 6 'gather/take' control structure in Perl 5

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Sub-Exporter-Progressive>=0:devel/p5-Sub-Exporter-Progressive
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
