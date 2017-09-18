# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: head/misc/p5-Locale-SubCountry/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Locale-SubCountry
PORTVERSION=	2.02
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convert state, province, county etc. names to/from code

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-JSON>=1:converters/p5-JSON
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		dos2unix perl5
USE_PERL5=	configure

.include <bsd.port.mk>
