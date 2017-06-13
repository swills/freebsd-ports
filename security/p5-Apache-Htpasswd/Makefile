# Created by: Greg Larkin <glarkin@FreeBSD.org>
# $FreeBSD: head/security/p5-Apache-Htpasswd/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Apache-Htpasswd
PORTVERSION=	1.9
PORTREVISION=	1
CATEGORIES=	security perl5 www
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Manage Unix crypt-style password file

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Crypt-PasswdMD5>=0:security/p5-Crypt-PasswdMD5 \
		p5-Digest-SHA1>=2.0:security/p5-Digest-SHA1 \
		p5-MIME-Base64>=0:converters/p5-MIME-Base64
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
