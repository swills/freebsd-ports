# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/databases/p5-Cache-BDB/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Cache-BDB
PORTVERSION=	0.04
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Object caching wrapper around BerkeleyDB

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-BerkeleyDB>=0:databases/p5-BerkeleyDB

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
