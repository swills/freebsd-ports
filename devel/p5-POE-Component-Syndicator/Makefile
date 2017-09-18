# Created by: Jase Thew <freebsd@beardz.net>
# $FreeBSD: head/devel/p5-POE-Component-Syndicator/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	POE-Component-Syndicator
PORTVERSION=	0.06
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:HINRIK
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE component base class which implements the Observer pattern

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-POE>=1.311:devel/p5-POE \
		p5-Object-Pluggable>=1.29:devel/p5-Object-Pluggable \
		p5-Test-Simple>=0:devel/p5-Test-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
