# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/archivers/p5-POE-Filter-LZF/Makefile 434542 2017-02-21 16:36:32Z sunpoet $

PORTNAME=	POE-Filter-LZF
PORTVERSION=	1.72
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE filter wrapped around Compress::LZF

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Compress-LZF>=1.51:archivers/p5-Compress-LZF \
		p5-POE>=0.38:devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
