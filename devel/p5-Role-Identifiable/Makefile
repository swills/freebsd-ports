# Created by: Geraud CONTINSOUZAS <geraud@gcu.info>
# $FreeBSD: head/devel/p5-Role-Identifiable/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Role-Identifiable
PORTVERSION=	0.007
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RJBS
PKGNAMEPREFIX=	p5-

MAINTAINER=	geraud@gcu.info
COMMENT=	Thing with a list of tags

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Moose>=0:devel/p5-Moose
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
