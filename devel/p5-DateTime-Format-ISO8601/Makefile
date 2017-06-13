# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: head/devel/p5-DateTime-Format-ISO8601/Makefile 435021 2017-02-28 09:46:43Z sunpoet $

PORTNAME=	DateTime-Format-ISO8601
PORTVERSION=	0.08
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse ISO8601 formats

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-DateTime>=0.18:devel/p5-DateTime \
		p5-DateTime-Format-Builder>=0.77:devel/p5-DateTime-Format-Builder
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
