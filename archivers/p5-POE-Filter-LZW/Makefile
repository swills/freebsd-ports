# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/archivers/p5-POE-Filter-LZW/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	POE-Filter-LZW
PORTVERSION=	1.74
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE filter wrapped around Compress::LZW

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Compress-LZW>=0:archivers/p5-Compress-LZW \
		p5-POE>=0.38:devel/p5-POE

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
