# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/archivers/p5-POE-Filter-LZW/Makefile 434762 2017-02-25 04:22:44Z sunpoet $

PORTNAME=	POE-Filter-LZW
PORTVERSION=	1.74
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE filter wrapped around Compress::LZW

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Compress-LZW>=0:archivers/p5-Compress-LZW \
		p5-POE>=0.38:devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
