# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/p5-Module-Build-XSUtil/Makefile 467923 2018-04-22 08:46:58Z sunpoet $

PORTNAME=	Module-Build-XSUtil
PORTVERSION=	0.19
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Module::Build class for building XS modules

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Devel-CheckCompiler>=0:devel/p5-Devel-CheckCompiler
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Capture-Tiny>=0:devel/p5-Capture-Tiny \
		p5-Cwd-Guard>=0:devel/p5-Cwd-Guard \
		p5-File-Copy-Recursive-Reduced>=0.002:devel/p5-File-Copy-Recursive-Reduced

NO_ARCH=	yes
USE_PERL5=	modbuild
USES=		perl5

.include <bsd.port.mk>
