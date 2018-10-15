# Created by: Jase Thew <freebsd@beardz.net>
# $FreeBSD: head/dns/p5-POE-Component-Resolver/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	POE-Component-Resolver
PORTVERSION=	0.921
PORTREVISION=	2
CATEGORIES=	dns devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RCAPUTO
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Non-blocking getaddrinfo() resolver

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-POE>=1.311:devel/p5-POE

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
