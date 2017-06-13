# Created by: Yen-Ming Lee <leeym@FreeBSD.org>
# $FreeBSD: head/devel/p5-File-HomeDir/Makefile 437885 2017-04-06 21:56:17Z sunpoet $

PORTNAME=	File-HomeDir
PORTVERSION=	1.002
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Get home directory for self or other users

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-File-Which>=0.05:sysutils/p5-File-Which
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
