# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/devel/p5-Test-YAML-Valid/Makefile 490631 2019-01-18 09:00:31Z amdmi3 $

PORTNAME=	Test-YAML-Valid
PORTVERSION=	0.04
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Test for valid YAML

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-YAML>=0.60:textproc/p5-YAML

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

OPTIONS_DEFINE=	YAMLSYCK
YAMLSYCK_DESC=	Use YAML::Syck for testing

YAMLSYCK_RUN_DEPENDS=	p5-YAML-Syck>0:textproc/p5-YAML-Syck
YAMLSYCK_BUILD_DEPENDS=	p5-YAML-Syck>0:textproc/p5-YAML-Syck

post-patch:
	@${REINPLACE_CMD} -i '' -e '/auto_install.*/d' \
		${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
