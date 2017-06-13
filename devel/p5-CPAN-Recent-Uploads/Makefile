# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/devel/p5-CPAN-Recent-Uploads/Makefile 438005 2017-04-08 10:34:09Z sunpoet $

PORTNAME=	CPAN-Recent-Uploads
PORTVERSION=	0.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BINGOS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Find the distributions recently uploaded to CPAN

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-URI>=1.56:net/p5-URI \
		p5-YAML-Syck>=1.15:textproc/p5-YAML-Syck \
		p5-libwww>=5.835:www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
