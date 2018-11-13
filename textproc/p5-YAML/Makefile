# $FreeBSD: head/textproc/p5-YAML/Makefile 484132 2018-11-04 18:57:26Z sunpoet $

PORTNAME=	YAML
PORTVERSION=	1.27
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	YAML implementation in Perl

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	p5-Test-Deep>=0:devel/p5-Test-Deep \
		p5-Test-YAML>=1.05:devel/p5-Test-YAML

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
