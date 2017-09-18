# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/p5-List-SomeUtils/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	List-SomeUtils
PORTVERSION=	0.56
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Provide the stuff missing in List::Util

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-List-SomeUtils-XS>=0:devel/p5-List-SomeUtils-XS \
		p5-Module-Implementation>=0:devel/p5-Module-Implementation
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
