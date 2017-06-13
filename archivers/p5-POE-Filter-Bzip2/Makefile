# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/archivers/p5-POE-Filter-Bzip2/Makefile 434541 2017-02-21 16:36:27Z sunpoet $

PORTNAME=	POE-Filter-Bzip2
PORTVERSION=	1.60
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE filter wrapped around Compress::Bzip2

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Compress-Bzip2>=2.08:archivers/p5-Compress-Bzip2 \
		p5-POE>=0.38:devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
