# Created by: Geraud CONTINSOUZAS <geraud@gcu.info>
# $FreeBSD: head/devel/p5-Config-MVP-Reader-INI/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Config-MVP-Reader-INI
PORTVERSION=	2.101463
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	geraud@gcu.info
COMMENT=	MVP config reader for .ini files

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Config-INI>=0:devel/p5-Config-INI \
		p5-Config-MVP>=2:devel/p5-Config-MVP
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
