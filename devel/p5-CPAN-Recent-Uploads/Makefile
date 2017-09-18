# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/devel/p5-CPAN-Recent-Uploads/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	CPAN-Recent-Uploads
PORTVERSION=	0.12
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BINGOS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Find the distributions recently uploaded to CPAN

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-URI>=1.56:net/p5-URI \
		p5-YAML-LibYAML>=0.64:textproc/p5-YAML-LibYAML \
		p5-libwww>=5.835:www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
