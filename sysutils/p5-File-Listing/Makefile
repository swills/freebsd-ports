# Created by: Frederic Culot <culot@FreeBSD.org>
# $FreeBSD: head/sysutils/p5-File-Listing/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	File-Listing
PORTVERSION=	6.04
PORTREVISION=	1
CATEGORIES=	sysutils perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse directory listings

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTTP-Date>=6:www/p5-HTTP-Date

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
