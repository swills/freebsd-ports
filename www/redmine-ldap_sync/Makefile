# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/www/redmine-ldap_sync/Makefile 457904 2018-01-02 16:04:00Z feld $

PORTNAME=	ldap_sync
PORTVERSION=	2.1.0
CATEGORIES=	www
PKGNAMEPREFIX=	redmine-
DIST_SUBDIR=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	feld@FreeBSD.org
COMMENT=	LDAP user/group synchronization for Redmine

LICENSE=	GPLv3+

NO_ARCH=	yes

USES=		shebangfix
SHEBANG_FILES=	test/fixtures/ldap/names.rb

USE_GITHUB=	yes
GH_ACCOUNT=	thorin
GH_PROJECT=	redmine_${PORTNAME}

REDMINE_PLUGIN_NAME=	redmine_${PORTNAME}

.include "${.CURDIR}/../../www/redmine/bsd.redmine.mk"
