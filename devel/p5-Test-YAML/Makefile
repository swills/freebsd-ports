# $FreeBSD: head/devel/p5-Test-YAML/Makefile 475846 2018-07-29 19:28:18Z sunpoet $

PORTNAME=	Test-YAML
PORTVERSION=	1.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	svysh.fbsd@gmail.com
COMMENT=	Testing Module for YAML Implementations

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	bash:shells/bash \
		p5-Test-Base>=0.89:devel/p5-Test-Base
RUN_DEPENDS:=	${BUILD_DEPENDS}

CONFLICTS_INSTALL=	p5-YAML-0.*

NO_ARCH=	yes
USES=		perl5 shebangfix
USE_PERL5=	configure

SHEBANG_FILES=	bin/test-yaml

.include <bsd.port.mk>
