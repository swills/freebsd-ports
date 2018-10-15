# Created by: James FitzGibbon <jfitz@FreeBSD.org>
# $FreeBSD: head/security/p5-Crypt-DES/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Crypt-DES
PORTVERSION=	2.07
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to DES block cipher

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Crypt-CBC>=0:security/p5-Crypt-CBC

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
