# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: head/devel/p5-DateTime-Format-Baby/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	DateTime-Format-Baby
PORTVERSION=	1.0200
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse and format baby-style time

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-DateTime>=0.16:devel/p5-DateTime \
		p5-Params-Validate>=0:devel/p5-Params-Validate
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
